//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol APSTopicSaltStore;

@interface APSTopicHasher : NSObject
{
    id <APSTopicSaltStore> _topicSaltStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000c53ca
@property(retain, nonatomic) id <APSTopicSaltStore> topicSaltStore; // @synthesize topicSaltStore=_topicSaltStore;
- (id)_identifierForTopic:(id)arg1 user:(id)arg2;	// IMP=0x00100000000c52c2
- (id)topicsToSaltsWithUser:(id)arg1;	// IMP=0x00100000000c5248
- (id)topicHashForTopic:(id)arg1 user:(id)arg2;	// IMP=0x00100000000c5123
- (id)createTopicHashForTopic:(id)arg1 user:(id)arg2 shouldSalt:(_Bool)arg3;	// IMP=0x00100000000c4f52
- (void)clearSaltForTopic:(id)arg1 user:(id)arg2;	// IMP=0x00100000000c4eb4
- (id)initWithTopicSaltStore:(id)arg1;	// IMP=0x00100000000c4e49

@end

