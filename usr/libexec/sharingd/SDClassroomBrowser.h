//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SDClassroomBrowser : NSObject
{
    NSArray *_nodes;	// 8 = 0x8
    NSString *_clientBundleID;	// 16 = 0x10
}

+ (id)sharedBrowser;	// IMP=0x004000000001f261
- (void).cxx_destruct;	// IMP=0x002000000001f33a
@property(copy) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(readonly, copy) NSArray *nodes; // @synthesize nodes=_nodes;
- (void)cancelSendingItemsToPersonWithID:(id)arg1 sessionID:(id)arg2 clientBundleID:(id)arg3;	// IMP=0x001000000001f2fd
- (void)startSendingItems:(id)arg1 withProperties:(id)arg2 toPersonWithID:(id)arg3 clientBundleID:(id)arg4 airDropClientDelegate:(id)arg5;	// IMP=0x001000000001f2f7
- (void)potentiallyInvalidate;	// IMP=0x001000000001f2f1
- (void)stop;	// IMP=0x001000000001f2eb
- (void)start;	// IMP=0x001000000001f2e5
- (id)init;	// IMP=0x001000000001f2b6

@end

