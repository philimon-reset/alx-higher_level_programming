# puppet
class { 'ssh::server':
  options           => {
    'HostKey' => ['/etc/ssh/ssh_host_ed25519_key', '/etc/ssh/ssh_host_rsa_key'],
  },
}