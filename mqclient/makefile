.PHONY: publish_client consume_client
all:publish_client consume_client
publish_client : publish_client.cc ../mqcommon/mq_proto.pb.cc ../mqcommon/mq_msg.pb.cc ../mqthird/include/muduo/proto/codec.cc
	g++ -g -std=c++11 $^ -o $@ -I../mqthird/include -L../mqthird/lib  -lmuduo_net -lmuduo_base -pthread -lprotobuf -lz
consume_client : consume_client.cc ../mqcommon/mq_proto.pb.cc ../mqcommon/mq_msg.pb.cc ../mqthird/include/muduo/proto/codec.cc
	g++ -g -std=c++11 $^ -o $@ -I../mqthird/include -L../mqthird/lib  -lmuduo_net -lmuduo_base -pthread -lprotobuf -lz