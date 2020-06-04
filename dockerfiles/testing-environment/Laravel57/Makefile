7.3_VERSION = 7.3.15

ALL_VERSIONS = 7.3

all.build: $(addsuffix .laravel57.build,ALL_VERSIONS) $(addsuffix .wp5.build,ALL_VERSIONS)
	@:

all.publish: $(addsuffix .laravel57.publish,ALL_VERSIONS) $(addsuffix .wp5.publish,ALL_VERSIONS)
	@:

%.laravel57.build:
	@docker build --build-arg PHP_VERSION="${${*}_VERSION}" -t registry.ddbuild.io/apm-integrations-testing/handmade/php-laravel:$* .

%.laravel57.publish: %.laravel57.build
	@docker push registry.ddbuild.io/apm-integrations-testing/handmade/php-laravel:$*

%.wp5.build:
	@docker build -t registry.ddbuild.io/apm-integrations-testing/handmade/php-wp5:$* ./Wordpress5

%.wp5.shell: %.wp5.build
	@docker run --rm -ti registry.ddbuild.io/apm-integrations-testing/handmade/php-wp5:$* bash
