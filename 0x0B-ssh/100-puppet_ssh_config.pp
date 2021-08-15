# puppet
file_line {"Declare":
  ensure => created,
  path => "/etc/ssh/ssh_config",
  line => "IdentityFile ~/.ssh/holberton"
}

file_line {"passwd":
  ensure => created,
  path => "/etc/ssh/ssh_config",
  line => "PasswordAuthentication no"
}