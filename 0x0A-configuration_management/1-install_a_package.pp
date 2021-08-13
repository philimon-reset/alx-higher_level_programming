# puppet project

package {'puppet-lint':
  ensure  => '2.1.1',
  require => Package[openssl]
  provider => 'gem',
}