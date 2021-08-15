# puppet
file_line { "Ciphers":
  ensure => created,
  path => "/etc/ssh/ssh_config",
  line => "IdentityFile ~/.ssh/holberton"
}

file_line { "Ciphers":
  ensure => created,
  path => "/etc/ssh/ssh_config",
  line => "PasswordAuthentication no"
}