//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLBatchedAccelerometerService
{
    struct unique_ptr<CLBatchedAccelerometerClient::Client, std::default_delete<CLBatchedAccelerometerClient::Client>> _accel800;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x004000000084f8fc
+ (id)getSilo;	// IMP=0x001000000084f8a0
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000084f887
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000084f82a
- (id).cxx_construct;	// IMP=0x00200000008502a5
- (void).cxx_destruct;	// IMP=0x001000000085027d
- (void)onBatchedData:(void *)arg1 N:(int)arg2;	// IMP=0x001000000084fee4
- (void)unregisterForData:(byref id)arg1;	// IMP=0x001000000084fe32
- (void)registerForData:(byref id)arg1;	// IMP=0x001000000084fa60
- (void)dealloc;	// IMP=0x001000000084f9e1
- (id)init;	// IMP=0x001000000084f915

@end
