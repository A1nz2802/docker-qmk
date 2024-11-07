# QMK on Docker

![Imgur](https://i.imgur.com/1S2gbr7.gif)

> [!NOTE]
> This setup has only been tested on Linux with a Foostan Corne (CRKBD) keyboard.

## Getting Started

### Initial Configuration

**Configure Your Keymap:**  
Place your custom keymap configuration files in the `keymap` directory within this project. Ensure that it contains all necessary files to build your keyboard’s firmware.

**Environment Variables:**  
Rename the `.env.local` file to `.env`.  
Open the `.env` file and add any necessary environment variables (such as specifying the keyboard model and keymap to use during compilation).

To start the Docker environment, run the following command:

```sh
  docker compose up -d
```

### Compile or Flash the Firmware

With the container running, you can execute the provided scripts to build and flash the firmware.

To **compile** the QMK firmware, run the following command from the host:

```sh
  docker exec -it qmk /compile.sh
```

To **flash** the firmware to your keyboard, run:

```sh
  docker exec -it qmk /flash.sh
```

When you’re finished, don’t forget to stop the container:

```sh
  docker compose down -v
```

> [!CAUTION]
> Please note that the container needs to run with `privileged: true` in the Docker Compose configuration. This grants the container additional permissions, which could pose a security risk. As such, this container/image should only be used in a trusted, local development environment.