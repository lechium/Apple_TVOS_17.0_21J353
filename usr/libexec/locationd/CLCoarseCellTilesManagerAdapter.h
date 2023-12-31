//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLCoarseCellTilesManagerAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x00200000007a4dda
+ (id)getSilo;	// IMP=0x00100000007a4bc6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000007a4bad
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000007a4b50
- (void)requestCellTileDownloadByType:(int)arg1 lat:(double)arg2 lon:(double)arg3 seckey:(unsigned long long)arg4;	// IMP=0x00200000007a4f6b
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000007a4db2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000007a4d85
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000007a4d5d
- (void *)adaptee;	// IMP=0x00100000007a4d2a
- (void)endService;	// IMP=0x00100000007a4d0f
- (void)beginService;	// IMP=0x00100000007a4c5f
- (id)init;	// IMP=0x00100000007a4c22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

