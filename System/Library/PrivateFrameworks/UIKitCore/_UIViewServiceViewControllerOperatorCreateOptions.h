//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSMachPortSendRight, NSArray, NSString, NSUUID, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerOperatorCreateOptions : NSObject
{
    _Bool _hostCanDynamicallySpecifySupportedInterfaceOrientations;	// 8 = 0x8
    NSString *_viewControllerClassName;	// 16 = 0x10
    NSArray *_serializedAppearanceRepresentations;	// 24 = 0x18
    NSUUID *_contextToken;	// 32 = 0x20
    NSArray *_displayConfigurations;	// 40 = 0x28
    UITraitCollection *_traitCollection;	// 48 = 0x30
    BSMachPortSendRight *_hostAccessibilityServerPort;	// 56 = 0x38
    long long _availableTextServices;	// 64 = 0x40
    long long _initialInterfaceOrientation;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000012a0217
- (void).cxx_destruct;	// IMP=0x00000000012a02f5
@property(nonatomic) _Bool hostCanDynamicallySpecifySupportedInterfaceOrientations; // @synthesize hostCanDynamicallySpecifySupportedInterfaceOrientations=_hostCanDynamicallySpecifySupportedInterfaceOrientations;
@property(nonatomic) long long initialInterfaceOrientation; // @synthesize initialInterfaceOrientation=_initialInterfaceOrientation;
@property(nonatomic) long long availableTextServices; // @synthesize availableTextServices=_availableTextServices;
@property(retain, nonatomic) BSMachPortSendRight *hostAccessibilityServerPort; // @synthesize hostAccessibilityServerPort=_hostAccessibilityServerPort;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(copy, nonatomic) NSArray *displayConfigurations; // @synthesize displayConfigurations=_displayConfigurations;
@property(retain, nonatomic) NSUUID *contextToken; // @synthesize contextToken=_contextToken;
@property(copy, nonatomic) NSArray *serializedAppearanceRepresentations; // @synthesize serializedAppearanceRepresentations=_serializedAppearanceRepresentations;
@property(copy, nonatomic) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_viewControllerClassName;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000129fe11
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000129fb2e

@end

