//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NGMKeyValidator : NSObject
{
}

+ (id)keyValidatorWithReceiversIdentity:(id)arg1 sendersIdentity:(id)arg2;	// IMP=0x0080000000011a5d
+ (_Bool)isValidKeyValidator:(id)arg1 receiversIdentity:(id)arg2 sendersIdentity:(id)arg3 error:(id *)arg4;	// IMP=0x0080000000010dc5
+ (id)versionByte;	// IMP=0x0080000000010d77
+ (struct _NSRange)rangeOnPublicKey;	// IMP=0x0080000000010d6a
+ (unsigned long long)validatorLength;	// IMP=0x0080000000010d06

@end
