FROM debian:stable

ARG KEYBOARD=$KEYBOARD
ARG KEYMAP=$KEYMAP
ENV PATH="/root/.local/bin:$PATH"

COPY compile.sh /
COPY flash.sh /
RUN chmod +x compile.sh flash.sh

WORKDIR /app

RUN apt update && apt upgrade -y
RUN apt install -y sudo usbutils git pipx udev wget
RUN pipx install qmk
RUN qmk setup -y
RUN mkdir -p /etc/udev/rules.d/
RUN wget -O /usr/share/misc/usb.ids http://www.linux-usb.org/usb.ids
RUN sudo cp /root/qmk_firmware/util/udev/50-qmk.rules /etc/udev/rules.d/
RUN qmk new-keymap -kb ${KEYBOARD} -km ${KEYMAP}
CMD ["sleep", "infinity"]
#COPY keymap/keymap.c /root/qmk_firmware/keyboards/${KEYBOARD}/keymaps/${KEYMAP}
#RUN qmk compile -kb ${KEYBOARD} -km ${KEYMAP}
#CMD qmk flash -kb ${KEYBOARD} -km ${KEYMAP}


