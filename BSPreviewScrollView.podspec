Pod::Spec.new do |s|
  s.name         = "BSPreviewScrollView"
  s.version      = "0.0.1"
  s.summary      = "."
  s.description  = <<-DESC
                   Legacy virtualized scrollview created by Björn Sållarp 
                   DESC
  s.homepage     = "https://github.com/kcoop/BSPreviewScrollView.git"
  s.platform     = :ios, '5.0'
  s.author       = 'Björn Sållarp'
  s.license      = 'No Restrictions'
  s.requires_arc = true
  s.source       = { :git => 'https://github.com/kcoop/BSPreviewScrollView.git' }
  s.source_files = '*.{h,m}'
end
