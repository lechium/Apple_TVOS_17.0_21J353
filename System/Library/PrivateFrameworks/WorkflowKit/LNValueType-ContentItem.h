//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkMetadata/LNValueType.h>

@class LNEntityValueType, LNLinkEnumerationValueType;

@interface LNValueType (ContentItem)
- (id)wf_contentCollectionFromLinkValue:(id)arg1 appBundleIdentifier:(id)arg2 displayedBundleIdentifier:(id)arg3;	// IMP=0x00300000001f701a
- (id)wf_contentItemFromLinkValue:(id)arg1 appBundleIdentifier:(id)arg2 displayedBundleIdentifier:(id)arg3;	// IMP=0x00300000001f6d53
- (Class)wf_contentItemClassWithAppBundleIdentifier:(id)arg1;	// IMP=0x00300000001f6d1d
- (id)wf_titleWithCustomIntentSerializedRepresentation:(id)arg1;	// IMP=0x003000000021b231
- (id)wf_valueTypeOfClass:(Class)arg1;	// IMP=0x0030000000266dd6
- (id)wf_parameterDefinitionWithParameterMetadata:(id)arg1 dynamicOptionsSupport:(_Bool)arg2;	// IMP=0x0030000000266882
- (id)wf_parameterDefinitionWithParameterMetadata:(id)arg1;	// IMP=0x0030000000266815
@property(readonly, nonatomic) LNEntityValueType *wf_entityValueType;
@property(readonly, nonatomic) LNLinkEnumerationValueType *wf_enumValueType;
@property(readonly, nonatomic) LNValueType *wf_objectValueType;
@property(readonly, nonatomic) Class wf_objectClass;
@end
