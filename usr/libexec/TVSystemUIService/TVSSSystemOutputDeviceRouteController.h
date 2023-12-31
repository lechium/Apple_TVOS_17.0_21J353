//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVEndpointRoute, MPAVOutputDeviceRoute, NSArray, NSNumber, NSString, TVSObserverSet, UIImage;
@protocol OS_os_log;

@interface TVSSSystemOutputDeviceRouteController : NSObject
{
    TVSObserverSet *_observers;	// 8 = 0x8
    _Bool _isSplitRoute;	// 16 = 0x10
    _Bool _hasExternalPickedRoutes;	// 17 = 0x11
    _Bool _hasMultiplePickedRoutes;	// 18 = 0x12
    MPAVEndpointRoute *_systemEndpointRoute;	// 24 = 0x18
    MPAVOutputDeviceRoute *_systemOutputDeviceRoute;	// 32 = 0x20
    MPAVOutputDeviceRoute *_primaryOutputDeviceRoute;	// 40 = 0x28
    MPAVOutputDeviceRoute *_secondaryOutputDeviceRoute;	// 48 = 0x30
    NSArray *_selectedOutputDevices;	// 56 = 0x38
    NSObject<OS_os_log> *_log;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00100000000ce5e0
@property(readonly, nonatomic) _Bool hasMultiplePickedRoutes; // @synthesize hasMultiplePickedRoutes=_hasMultiplePickedRoutes;
@property(readonly, nonatomic) _Bool hasExternalPickedRoutes; // @synthesize hasExternalPickedRoutes=_hasExternalPickedRoutes;
@property(readonly, nonatomic) _Bool isSplitRoute; // @synthesize isSplitRoute=_isSplitRoute;
@property(readonly, nonatomic) NSArray *selectedOutputDevices; // @synthesize selectedOutputDevices=_selectedOutputDevices;
@property(readonly, nonatomic) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute; // @synthesize secondaryOutputDeviceRoute=_secondaryOutputDeviceRoute;
@property(readonly, nonatomic) MPAVOutputDeviceRoute *primaryOutputDeviceRoute; // @synthesize primaryOutputDeviceRoute=_primaryOutputDeviceRoute;
@property(readonly, nonatomic) MPAVOutputDeviceRoute *systemOutputDeviceRoute; // @synthesize systemOutputDeviceRoute=_systemOutputDeviceRoute;
@property(readonly, nonatomic) MPAVEndpointRoute *systemEndpointRoute; // @synthesize systemEndpointRoute=_systemEndpointRoute;
- (void)_updateOutputDevicesWithReason:(id)arg1;	// IMP=0x00100000000ccb80
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000cc7f0
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000cc750
- (id)succinctDescriptionBuilder;	// IMP=0x00100000000cc520
- (id)succinctDescription;	// IMP=0x00100000000cc4b0
@property(retain, nonatomic, setter=_setSystemEndpointRoute:) MPAVEndpointRoute *_systemEndpointRoute;
- (void)_handleRouteDidChangeNotification;	// IMP=0x00100000000cc370
@property(readonly, nonatomic) NSString *symbolNameForCurrentRoutes;
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000cc240
- (void)addObserver:(id)arg1;	// IMP=0x00100000000cc150
- (id)initWithSystemEndpointRoute:(id)arg1;	// IMP=0x00100000000cc000
- (id)init;	// IMP=0x00100000000cbf70
@property(readonly, nonatomic) UIImage *contentImage;
@property(readonly, nonatomic) NSString *contentTitle;

// Remaining properties
@property(readonly, nonatomic) NSArray *contentChildIdentifiers;
@property(readonly, nonatomic) UIImage *contentImage1;
@property(readonly, nonatomic) UIImage *contentImage2;
@property(readonly, nonatomic) UIImage *contentImage3;
@property(readonly, nonatomic) UIImage *contentImage4;
@property(nonatomic) _Bool contentIsDisabled;
@property(nonatomic) _Bool contentIsSelected;
@property(retain, nonatomic) NSNumber *contentPercentage;
@property(readonly, nonatomic) NSString *contentText1;
@property(readonly, nonatomic) NSString *contentText2;
@property(readonly, nonatomic) NSString *contentText3;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

