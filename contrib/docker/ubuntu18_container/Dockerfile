FROM ubuntu:18.04

RUN apt-get update

RUN apt-get install -y build-essential
RUN apt-get install -y git
RUN apt-get install -y software-properties-common python-software-properties

RUN add-apt-repository ppa:bitcoin/bitcoin
RUN apt-get update

RUN apt-get install -y libdb4.8-dev libdb4.8++-dev libtool autotools-dev automake pkg-config libssl-dev libevent-dev \
    bsdmainutils git libboost-all-dev libminiupnpc-dev libqt5gui5 libqt5core5a libqt5webkit5-dev libqt5dbus5 qttools5-dev qttools5-dev-tools \
    libprotobuf-dev protobuf-compiler libqrencode-dev zlib1g-dev libseccomp-dev libcap-dev libncap-dev

#bitphantom
RUN mkdir /root/bitphantom
RUN git clone https://github.com/bitphantomcurrency/bitphantom /root/bitphantom
RUN cd /root/bitphantom/ ; /root/bitphantom/autogen.sh
RUN cd /root/bitphantom/ ; /root/bitphantom/configure
RUN cd /root/bitphantom/ ; make

RUN chmod 0777 /root/bitphantom/src/*

ADD ./conf/bitphantom.conf /root/.bitphantom/bitphantom.conf

WORKDIR /root/bitphantom

EXPOSE 80111 80122

#CMD printenv | grep -v "yyyyyxxxx" >> /etc/environment && tail -f /dev/null

CMD /root/bitphantom/src/bitphantomd -printtoconsole
