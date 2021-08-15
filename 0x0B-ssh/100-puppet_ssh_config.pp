# puppet
class { 'ssh::server':
  options           => {
    'HostKey' => ['~/.ssh/holberton'],
  },
}