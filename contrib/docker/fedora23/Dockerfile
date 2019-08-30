FROM fedora:23

MAINTAINER Mike Kinney <mike.kinney@gmail.com>

RUN dnf upgrade -y
RUN dnf install -y autoconf automake gcc-c++ libdb4-cxx libdb4-cxx-devel boost-devel openssl-devel git bzip2 make file sudo tar patch findutils libevent-devel libseccomp-devel libcap-devel

RUN dnf install -y protobuf-lite-devel

RUN dnf install -y qt5-qtbase-devel qt5-qttools-devel qt5-qtwebkit-devel qt5-qtwebsockets qrencode-devel

RUN git clone https://github.com/bitphantomcurrency/bitphantom /coin/git

WORKDIR /coin/git

RUN ./autogen.sh && ./configure --with-gui=qt5 && make && mv src/bitphantomd /coin/bitphantomd

WORKDIR /coin
VOLUME ["/coin/home"]

ENV HOME /coin/home

CMD ["/coin/bitphantomd"]

# P2P, RPC
EXPOSE 80111 80122
