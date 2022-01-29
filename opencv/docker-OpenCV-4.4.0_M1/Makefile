IMAGE_NAME := nishikawa/opencv:4.4.0_M1
CONTAINER_NAME := nishikawa_opencv

run:
	xhost + localhost
	docker run -itd \
		--name $(CONTAINER_NAME) \
		--privileged \
		--env DISPLAY=host.docker.internal:0 \
		--net host \
    	--volume ~/.Xauthority:/root/.Xauthority \
		--volume ~/playground/cpp_prac:/root/workspace \
		--volume ~/.Xauthority:/root/.Xauthority \
		--volume /dev:/dev \
		$(IMAGE_NAME)

remove:
	docker stop $(CONTAINER_NAME) \
	&& docker rm $(CONTAINER_NAME)

rmi:
	docker rmi $(IMAGE_NAME)

build:
	docker build -t $(IMAGE_NAME) ./

shell:
	docker exec -it $(CONTAINER_NAME) /bin/bash
