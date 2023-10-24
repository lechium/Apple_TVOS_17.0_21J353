//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SOSAccount;

@interface CKKeyParameter : NSObject
{
    SOSAccount *account;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000020ea5e
@property(retain) SOSAccount *account; // @synthesize account;
- (_Bool)SOSTransportKeyParameterPublishCloudParameters:(id)arg1 data:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000020e734
- (_Bool)SOSTransportKeyParameterKVSAppendKeyInterests:(id)arg1 ak:(struct __CFArray *)arg2 firstUnLock:(struct __CFArray *)arg3 unlocked:(struct __CFArray *)arg4 err:(struct __CFError **)arg5;	// IMP=0x001000000020e6fe
- (id)initWithAccount:(id)arg1;	// IMP=0x001000000020e66d
- (long long)SOSTransportKeyParameterGetTransportType:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000020e662
- (id)SOSTransportKeyParameterGetAccount:(id)arg1;	// IMP=0x001000000020e654
- (_Bool)SOSTransportKeyParameterHandleKeyParameterChanges:(id)arg1 data:(struct __CFData *)arg2 err:(struct __CFError *)arg3;	// IMP=0x001000000020dfa9

@end

