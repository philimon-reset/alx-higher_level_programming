# puppet
sshkey { 'github.com':
  ensure => present,
  type   => 'ssh-rsa',
  key    => ~/.ssh/holberton,
}