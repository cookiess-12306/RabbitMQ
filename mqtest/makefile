.PHONY: mq_connectiontest
mq_connectiontest:mq_connectiontest.cpp ../mqcommon/mq_msg.pb.cc ../mqcommon/mq_proto.pb.cc
	g++ -g -std=c++11 $^ -o $@ -lgtest -lprotobuf -lsqlite3 -I../mqthird/include
mq_channeltest:mq_channeltest.cpp ../mqcommon/mq_msg.pb.cc ../mqcommon/mq_proto.pb.cc
	g++ -g -std=c++11 $^ -o $@ -lgtest -lprotobuf -lsqlite3 -I../mqthird/include
mq_consumertest:mq_consumertest.cpp ../mqcommon/mq_msg.pb.cc
	g++ -g -std=c++11 $^ -o $@ -lgtest -lprotobuf -lsqlite3
mq_routetest:mq_routetest.cpp ../mqcommon/mq_msg.pb.cc
	g++ -g -std=c++11 $^ -o $@ -lgtest -lprotobuf -lsqlite3
mq_hosttest:mq_hosttest.cpp ../mqcommon/mq_msg.pb.cc
	g++ -g -std=c++11 $^ -o $@ -lgtest -lprotobuf -lsqlite3
mq_msgtest:mq_msgtest.cpp ../mqcommon/mq_msg.pb.cc
	g++ -g -std=c++11 $^ -o $@ -lgtest -lprotobuf -lsqlite3
mq_bindingtest:mq_bindingtest.cpp
	g++ -g -std=c++11 $^ -o $@ -lgtest -lprotobuf -lsqlite3
mq_queuetest:mq_queuetest.cpp
	g++ -g -std=c++11 $^ -o $@ -lgtest -lprotobuf -lsqlite3
mq_exchangetest:mq_exchangetest.cpp
	g++ -g -std=c++11 $^ -o $@ -lgtest -lprotobuf -lsqlite3
mq_filetest:mq_filetest.cpp
	g++ -g -std=c++11 $^ -o $@
clean:
	rm -rf mq_filetest mq_exchangetest