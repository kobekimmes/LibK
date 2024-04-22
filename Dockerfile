FROM ubuntu:latest

# Install neccessary build tools such as make and gcc
RUN apt-get update && \
    apt-get install -y make gcc && \
    rm -rf /var/lib/apt/lists/*

RUN mkdir /app

COPY libk /app/libk

WORKDIR /app/libk

RUN make build

CMD ["make", "run"]