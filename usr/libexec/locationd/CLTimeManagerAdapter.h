//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLTimeManagerAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000003020b6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000030209d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000302040
- (void)setGpsTime:(unsigned long long)arg1;	// IMP=0x0020000000302343
- (_Bool)syncgetReferenceTime:(double *)arg1 andError:(double *)arg2;	// IMP=0x0010000000302303
- (_Bool)syncgetReferenceTime:(double *)arg1;	// IMP=0x00100000003022ca
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000003022a2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000302275
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000030224d
- (void *)adaptee;	// IMP=0x001000000030221a
- (void)endService;	// IMP=0x00100000003021ff
- (void)beginService;	// IMP=0x001000000030214f
- (id)init;	// IMP=0x0010000000302112

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
