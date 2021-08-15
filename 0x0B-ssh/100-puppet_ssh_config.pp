# puppet
file_line { 'Ciphers':
  path => '/etc/ssh/ssh_config',
  line => 'IdentityFile ~/.ssh/holberton'
}