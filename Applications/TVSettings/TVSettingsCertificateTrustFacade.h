//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TVSettingsCertificateTrustFacade : NSObject
{
    NSArray *_trustCertificates;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000037dfb
- (void).cxx_destruct;	// IMP=0x00200000000381fb
@property(copy, nonatomic) NSArray *trustCertificates; // @synthesize trustCertificates=_trustCertificates;
- (id)_displayNameForCertificate:(struct __SecCertificate *)arg1;	// IMP=0x0010000000038186
- (void)_updateCertificates;	// IMP=0x0010000000037f24
- (id)init;	// IMP=0x0010000000037e80

@end

