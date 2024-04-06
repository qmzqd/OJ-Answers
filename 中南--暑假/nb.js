const WebSocket = require('ws');
const server = new WebSocket.Server({ host: '176.219.40.110', port: 8000 });
server.on('connection', (socket, request) => {
  const clientIpAddress = request.socket.remoteAddress;
  console.log('客户端已连接，IP地址：', clientIpAddress);

  socket.on('message', (message) => {
    console.log('收到消息：', message);

    socket.send(`${clientIpAddress} 发送的消息：${message}`);
  });
  socket.on('close', () => {
    console.log('客户端断开连接，IP地址：', clientIpAddress);
  });
});