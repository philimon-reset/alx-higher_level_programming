# puppet project

package { $ssh:
  ensure  => '2.1.1',
  alias   => 'puppet-lint',
  provider => 'gem'
}