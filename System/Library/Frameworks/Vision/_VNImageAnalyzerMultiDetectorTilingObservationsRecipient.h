//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VNRequestSpecifier;
@protocol VNObservationsRecipient;

__attribute__((visibility("hidden")))
@interface _VNImageAnalyzerMultiDetectorTilingObservationsRecipient : NSObject
{
    id <VNObservationsRecipient> _observationsRecipient;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000021ab55
@property(readonly) VNRequestSpecifier *originatingRequestSpecifier;
- (void)receiveObservations:(id)arg1;	// IMP=0x000000000021ab39
- (id)initWithObservationsRecipient:(id)arg1;	// IMP=0x000000000021aaba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

