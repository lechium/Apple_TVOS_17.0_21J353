//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLDMVisionService : CLIntersiloService
{
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> fDeviceMotionDispatcher;	// 8 = 0x8
    struct unique_ptr<CLGeomagneticModelProvider_Type::Client, std::default_delete<CLGeomagneticModelProvider_Type::Client>> fGeomagneticModelProviderClient;	// 16 = 0x10
    double fDeclination;	// 24 = 0x18
    struct CLVisualLocalizationPropagation fVisualLocalizationPropagation;	// 32 = 0x20
}

+ (_Bool)isSupported;	// IMP=0x00200000007e697c
+ (id)getSilo;	// IMP=0x00100000007e6920
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000007e6907
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000007e68aa
- (id).cxx_construct;	// IMP=0x00200000007e6a76
- (void).cxx_destruct;	// IMP=0x00100000007e69fa
- (id)init;	// IMP=0x00100000007e69a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

