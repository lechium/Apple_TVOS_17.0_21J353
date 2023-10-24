//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITraitEnvironment-Protocol.h>

@class NSString, UITraitCollection;
@protocol UITraitEnvironment, _UITraitEnvironmentInternal;

@protocol _UITraitEnvironmentInternal <UITraitEnvironment>
- (NSString *)_traitTrace;
- (NSString *)_traitTrace:(NSString *)arg1;
- (UITraitCollection *)_traitCollectionForChildEnvironment:(id <UITraitEnvironment>)arg1;

@optional
- (NSString *)_extraInfoForTraitTrace;
- (id <_UITraitEnvironmentInternal>)_parentTraitEnvironment;
@end

