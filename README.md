![banner image](./assets/banner.png)
<p align="center">
<strong>A toy javascript runtime that mimics nodejs behavior🦊</strong>
</p>
<hr />

## 🧰 Stack
- V8 engine: To compile and execute javascript code
- LibUv: To initiate event loop, threads etc
- C++: A C++ written layer to utilize above libraries and to introduce some custom functions like print, timeout etc

## 🛠 Requirements
- Check [v8 docs](https://v8.dev/docs) to setup v8 on your machine.
- Check [LibUv docs](http://docs.libuv.org/en/v1.x/) to setup LibUv on your machine
- C++ compiler

## 🚀 Usage
To run **JS code** you need to first start the environment. To start run on your terminal

```sh
./start.sh
```
This will start the environment in watch mode. Write your JS code in `example.js` file.

> ⚠ In Vixen console.log is replace with display and setTimeout & setTimeInterval are replaced with a generic function timeout. 

## ‼ Limitation
- Vixen is just a toy runtime and it does not contains the full features of the nodejs or any other runtime
- The setup may be tiresome for a few because v8 and LibUv does not support all kind of CPU architectures. 

##  👨🏻‍💻 AUTHOR

🙋🏻‍♂️ Yo! It's Meer, a senior year CS undergrad. Let's get connected

<a href="https://twitter.com/meerhamzadev"><img src="https://img.shields.io/badge/Twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white" alt="Twitter" /></a>&nbsp;
<a href="https://linkedin.com/in/meerhamzadev/"><img src="https://img.shields.io/badge/linkedin-%230077B5.svg?&style=for-the-badge&logo=linkedin&logoColor=white" alt="LinkedIn" /></a>&nbsp;
<a href="mailto:hamzababar37@gmail.com?subject=From%20GitHub&body=Hi,%20there.%20Found%20you%20from%20GitHub."><img src="https://img.shields.io/badge/gmail-%23D14836.svg?&style=for-the-badge&logo=gmail&logoColor=white" alt="Gmail"/></a>&nbsp;
