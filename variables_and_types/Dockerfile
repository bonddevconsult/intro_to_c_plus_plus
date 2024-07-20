FROM gcc:latest
COPY . /usr/src/myapp
WORKDIR /usr/src/myapp
RUN g++ -std=c++11 -o myCustomApp main.cpp
CMD ["./myCustomApp"]