//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (Interchange)
+ (id)errorWithInterchangeErrorDictionary:(id)arg1;	// IMP=0x00200000000da518
+ (id)wfUnsupportedEnvironmentError;	// IMP=0x00200000000de628
+ (id)wf_unsupportedParameterErrorWithParameterName:(id)arg1 errorType:(id)arg2 platformIdiom:(long long)arg3;	// IMP=0x0020000000114d1c
+ (id)wf_unsupportedActionErrorWithType:(id)arg1 platformIdiom:(long long)arg2;	// IMP=0x0020000000114b90
+ (id)mtl_modelErrorWithException:(id)arg1;	// IMP=0x0020000000273bbe
+ (id)sharingMixedMDMContentErrorWithActionName:(id)arg1;	// IMP=0x002000000031c25e
- (id)interchangeErrorDictionary;	// IMP=0x00100000000da3b8
- (_Bool)wf_isUnsupportedEnvironmentError;	// IMP=0x00100000000de5b3
- (id)wf_localizedErrorStringWithActionName:(id)arg1;	// IMP=0x0010000000114655
@property(readonly, nonatomic) _Bool wf_isUnsupportedOnPlatformError;
@end
