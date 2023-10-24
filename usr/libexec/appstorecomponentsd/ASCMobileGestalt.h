//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ASCMobileGestalt : NSObject
{
}

+ (_Bool)hasCapabilities:(id)arg1;	// IMP=0x002000000001591d
+ (_Bool)isAppleSiliconMac;	// IMP=0x0010000000015915
+ (id)activePairedSystemVersion;	// IMP=0x001000000001590d
+ (_Bool)isStandaloneWatch;	// IMP=0x0010000000015905
+ (_Bool)isPad;	// IMP=0x00100000000158e8
+ (struct CGSize)mainScreenPointSize;	// IMP=0x0010000000015863
+ (double)mainScreenCornerRadius;	// IMP=0x0010000000015845
+ (double)mainScreenScale;	// IMP=0x0010000000015827
+ (struct CGSize)mainScreenSize;	// IMP=0x0010000000015763
+ (_Bool)hasHEVCDecoding;	// IMP=0x0010000000015752
+ (id)productType;	// IMP=0x0010000000015739
+ (id)deviceClass;	// IMP=0x0010000000015720
+ (_Bool)wapiCapability;	// IMP=0x001000000001570f
+ (_Bool)hasVenice;	// IMP=0x00100000000156fe
+ (_Bool)hasSystemTelephonyOfAnyKind;	// IMP=0x00100000000156ed

@end
