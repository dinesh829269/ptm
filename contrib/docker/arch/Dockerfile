FROM binhex/arch-base

MAINTAINER Mike Kinney <mike.kinney@gmail.com>

RUN pacman -S --noconfirm --needed base-devel boost boost-libs openssl db base-devel qrencode qt5 automoc4 git protobuf

RUN git clone https://github.com/bitphantomcurrency/bitphantom.git /coin/git

WORKDIR /coin/git

RUN ./autogen.sh && ./configure --with-gui=qt5 --with-incompatible-bdb --enable-hardening && make && mv src/bitphantomd /coin/bitphantomd

WORKDIR /coin
VOLUME ["/coin/home"]

ENV HOME /coin/home

CMD ["/coin/bitphantomd"]

# P2P, RPC
EXPOSE 80111 80122
