//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLFilteredLocationControllerAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000003c9e46
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000003c9e2d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000003c9dd0
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000003ca032
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000003ca005
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000003c9fdd
- (void *)adaptee;	// IMP=0x00100000003c9faa
- (void)endService;	// IMP=0x00100000003c9f8f
- (void)beginService;	// IMP=0x00100000003c9edf
- (id)init;	// IMP=0x00100000003c9ea2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

