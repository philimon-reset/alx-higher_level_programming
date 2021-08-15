# puppet
file_line {:
  ensure => created,
  path => "/etc/ssh/ssh_config",
  line => "IdentityFile ~/.ssh/holberton"
}

file_line {:
  ensure => created,
  path => "/etc/ssh/ssh_config",
  line => "PasswordAuthentication no"
}