//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SecConcrete_sec_certificate : NSObject
{
    struct __SecCertificate *certificate;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x00000000000496bb
- (id)initWithCertificate:(struct __SecCertificate *)arg1;	// IMP=0x000000000004964c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

