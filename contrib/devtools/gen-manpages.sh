#!/bin/bash

export LC_ALL=C
TOPDIR=${TOPDIR:-$(git rev-parse --show-toplevel)}
BUILDDIR=${BUILDDIR:-$TOPDIR}

BINDIR=${BINDIR:-$BUILDDIR/src}
MANDIR=${MANDIR:-$TOPDIR/doc/man}

bitphantomD=${bitphantomD:-$BINDIR/bitphantomd}
bitphantomCLI=${bitphantomCLI:-$BINDIR/bitphantom-cli}
bitphantomTX=${bitphantomTX:-$BINDIR/bitphantom-tx}
bitphantomQT=${bitphantomQT:-$BINDIR/qt/bitphantom-qt}

[ ! -x $bitphantomD ] && echo "$bitphantomD not found or not executable." && exit 1

# The autodetected version git tag can screw up manpage output a little bit
XSHVER=($($bitphantomCLI --version | head -n1 | awk -F'[ -]' '{ print $6, $7 }'))

# Create a footer file with copyright content.
# This gets autodetected fine for bitphantomd if --version-string is not set,
# but has different outcomes for bitphantom-qt and bitphantom-cli.
echo "[COPYRIGHT]" > footer.h2m
$bitphantomd --version | sed -n '1!p' >> footer.h2m

for cmd in $bitphantomd $bitphantomCLI $bitphantomTX $bitphantomQT; do
  cmdname="${cmd##*/}"
  help2man -N --version-string=${XSHVER[0]} --include=footer.h2m -o ${MANDIR}/${cmdname}.1 ${cmd}
  sed -i "s/\\\-${XSHVER[1]}//g" ${MANDIR}/${cmdname}.1
done

rm -f footer.h2m
