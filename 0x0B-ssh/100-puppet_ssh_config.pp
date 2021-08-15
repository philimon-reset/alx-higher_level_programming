# puppet
ssh_authorized_key { 'ubuntu@34.138.81.214':
  ensure => present,
  user   => 'ubuntu',
  type   => 'ssh-rsa',
  key    => '~/.ssh/holberton',
}