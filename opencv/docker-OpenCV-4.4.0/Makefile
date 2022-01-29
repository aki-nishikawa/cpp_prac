IMAGE_NAME := nishikawa/opencv:4.4.0
CONTAINER_NAME := nishikawa_opencv

run:
	/usr/bin/docker run -itd \
		--name $(CONTAINER_NAME) \
		--privileged \
		--env DISPLAY=${DISPLAY} \
		--net host \
    	--volume ~/.Xauthority:/root/.Xauthority \
		--volume ~/playground/cpp_prac:/root/workspace \
		--volume /dev:/dev \
		$(IMAGE_NAME)

remove:
	/usr/bin/docker stop $(CONTAINER_NAME) \
	&& /usr/bin/docker rm $(CONTAINER_NAME)

rmi:
	/usr/bin/docker rmi $(IMAGE_NAME)

build:
	/usr/bin/docker build -t $(IMAGE_NAME) ./

shell:
	/usr/bin/docker exec -it $(CONTAINER_NAME) /bin/bash
