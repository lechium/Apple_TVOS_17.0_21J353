//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkMetadata/LNImage.h>

@class NSString;

@interface LNImage (Workflow)
- (id)serializedRepresentation;	// IMP=0x00200000000ebdcc
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;	// IMP=0x00200000000ebbf3
- (unsigned long long)wfImageDisplayStyleFromLNImageDisplayStyle:(unsigned long long)arg1;	// IMP=0x00200000000ebbe4
- (id)wf_image;	// IMP=0x00200000000eb5ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

