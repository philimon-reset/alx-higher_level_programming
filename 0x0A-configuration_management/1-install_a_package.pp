# puppet project

package { $ssh:
  ensure  => '2.1.1',
  provider => 'gem'
}