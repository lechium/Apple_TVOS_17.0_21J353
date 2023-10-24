//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HMDAccessoryEventsGenerated : NSObject
{
}

+ (id)topicsRemovingAccessoryTopics:(id)arg1 accessoryUUID:(id)arg2;	// IMP=0x0080000000681b92
+ (_Bool)topicSuffix:(id)arg1 isPartOfIndex:(id)arg2;	// IMP=0x0080000000681ae2
+ (id)accessoryIndexForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;	// IMP=0x0080000000681a2d
+ (id)forwardingTopicsForTopics:(id)arg1 residentAccessoryUUID:(id)arg2 homeUUID:(id)arg3;	// IMP=0x00800000006818f2
+ (id)endpointAccessoryTopicsForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00800000006818d9
+ (id)homePodAccessoryTopicsForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00800000006818cc
+ (id)appleMediaAccessoryTopicsForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00800000006818bf
+ (id)indexTopicForTopic:(id)arg1;	// IMP=0x0080000000681695
+ (id)allTopics;	// IMP=0x0080000000681688
+ (id)topicMap;	// IMP=0x008000000068167b

@end
