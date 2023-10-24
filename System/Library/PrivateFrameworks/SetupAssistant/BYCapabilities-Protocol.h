//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupAssistant/NSObject-Protocol.h>

@protocol BYCapabilities <NSObject>
- (_Bool)mgSupportsSingleDisplayEnhancedMultitasking;
- (_Bool)mgHasGreenTea;
- (_Bool)mgHasCellularTelephony;
- (_Bool)mgHasCellularData;
- (_Bool)mgHasMesa;
- (_Bool)mgHasSecureElement;
- (_Bool)mgHasSiriCapability;
- (_Bool)isScreenTimeRestricted;
- (_Bool)isCloudAnalyticsRestricted;
- (_Bool)isDeviceAnalyticsRestricted;
- (_Bool)isSiriRestricted;
- (_Bool)canShowAppleIDScreen;
- (_Bool)canShowPasscodeScreen;
- (_Bool)canShowFaceIDScreen;
- (_Bool)canShowTouchIDScreen;
- (_Bool)canShowPaymentScreen;
- (_Bool)canShowSiriScreen;
- (_Bool)supportsKappaDetection;
- (_Bool)supportsAppleWatch;
- (_Bool)supportsApplePay;
- (_Bool)hasEligibleEnrolledIdentityForPeriocularFaceIDEnrollment;
- (_Bool)supportsPeriocularFaceID;
- (_Bool)isPearlEnrolled;
- (_Bool)supportsPearl;
- (_Bool)isTouchIDEnrolled;
- (_Bool)supportsTouchID;
@end

