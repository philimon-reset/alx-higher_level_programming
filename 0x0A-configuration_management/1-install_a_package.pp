# puppet project

package { $ssh:
  ensure  => '2.1.1',
  alias   => 'puppet-lint',
  require => Package[openssl]
  provider => 'gem',
}