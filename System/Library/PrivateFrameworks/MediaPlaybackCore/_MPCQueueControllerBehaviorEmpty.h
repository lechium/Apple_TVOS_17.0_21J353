//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MPCQueueControllerBehaviorHost;

__attribute__((visibility("hidden")))
@interface _MPCQueueControllerBehaviorEmpty : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    id <MPCQueueControllerBehaviorHost> _host;	// 16 = 0x10
}

+ (_Bool)canLoadQueue:(id)arg1 reason:(id *)arg2;	// IMP=0x00100000002f83d9
- (void).cxx_destruct;	// IMP=0x00000000002f83b3
@property(readonly, nonatomic) __weak id <MPCQueueControllerBehaviorHost> host; // @synthesize host=_host;
- (id)_itemForContentItemID:(id)arg1;	// IMP=0x00000000002f8395
- (void)currentItemDidChangeFromContentItemID:(id)arg1 toContentItemID:(id)arg2;	// IMP=0x00000000002f838f
- (id)contentItemIDEnumeratorStartingAfterContentItemID:(id)arg1 mode:(long long)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000002f8376
- (_Bool)canNextItemFromContentItemID:(id)arg1 reason:(id *)arg2;	// IMP=0x00000000002f835f
- (_Bool)canPreviousItemFromContentItemID:(id)arg1 reason:(id *)arg2;	// IMP=0x00000000002f8348
- (_Bool)canJumpToContentItemID:(id)arg1 reason:(id *)arg2;	// IMP=0x00000000002f8331
- (void)activeItemFlagsDidChange:(unsigned short)arg1;	// IMP=0x00000000002f832b
- (id)componentsForContentItemID:(id)arg1;	// IMP=0x00000000002f8323
- (_Bool)itemExistsForContentItemID:(id)arg1;	// IMP=0x00000000002f831b
- (id)_stateDictionaryIncludingQueue:(_Bool)arg1;	// IMP=0x00000000002f830e
@property(readonly, copy, nonatomic) NSString *sessionID;
- (void)disconnectFromHost:(id)arg1;	// IMP=0x00000000002f82fb
- (void)connectToHost:(id)arg1;	// IMP=0x00000000002f82f5
- (id)initWithSessionID:(id)arg1;	// IMP=0x00000000002f82c6
- (id)performLoadCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f82b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

