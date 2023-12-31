//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVHKDMAPEntityKind;

__attribute__((visibility("hidden")))
@interface TVHKDMAPEntityResponseParser : NSObject
{
    unsigned long long _maxEntities;	// 8 = 0x8
    unsigned long long _protocol;	// 16 = 0x10
    TVHKDMAPEntityKind *_entityKind;	// 24 = 0x18
}

+ (unsigned long long)_responseTypeFromUpdateTypePayload:(id)arg1;	// IMP=0x006000000008ce64
+ (id)_deletedEntityNonPersistentIDsFromDeletedIDsListingPayload:(id)arg1;	// IMP=0x006000000008ccf0
+ (id)_errorFromUpdateResponsePayload:(id)arg1;	// IMP=0x006000000008cb06
+ (id)_errorFromErrorResponsePayload:(id)arg1;	// IMP=0x006000000008c99a
+ (id)_errorFromErrorResponseData:(id)arg1;	// IMP=0x006000000008c7e1
+ (id)new;	// IMP=0x006000000008ba53
- (void).cxx_destruct;	// IMP=0x000000000008d2f6
@property(retain, nonatomic) TVHKDMAPEntityKind *entityKind; // @synthesize entityKind=_entityKind;
@property(nonatomic) unsigned long long protocol; // @synthesize protocol=_protocol;
@property(nonatomic) unsigned long long maxEntities; // @synthesize maxEntities=_maxEntities;
- (id)_parsedResponseFromDPAPResponseCode:(unsigned int)arg1 responsePayload:(id)arg2 requestType:(unsigned long long)arg3;	// IMP=0x000000000008d28b
- (unsigned int)_expectedDPAPResponseCodeForRequestType:(unsigned long long)arg1;	// IMP=0x000000000008d26e
- (id)_parsedResponseFromDAAPResponseCode:(unsigned int)arg1 responsePayload:(id)arg2 requestType:(unsigned long long)arg3;	// IMP=0x000000000008d1ed
- (unsigned int)_expectedDAAPResponseCodeForRequestType:(unsigned long long)arg1;	// IMP=0x000000000008d1d0
- (id)_entitiesFromListingTagPayload:(id)arg1 entityType:(unsigned long long)arg2 browseStyleListing:(_Bool)arg3;	// IMP=0x000000000008cef4
- (id)_parsedResponseFromResponsePayload:(id)arg1 listingCode:(unsigned int)arg2 browseStyleListing:(_Bool)arg3 entityType:(unsigned long long)arg4;	// IMP=0x000000000008c38e
- (id)_parsedResponseFromResponseCode:(unsigned int)arg1 responsePayload:(id)arg2 requestType:(unsigned long long)arg3;	// IMP=0x000000000008c305
- (id)_parsedResponseFromResponseData:(id)arg1 expectedResponseCode:(unsigned int)arg2 requestType:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000008bf0a
- (unsigned int)_expectedResponseCodeForRequestType:(unsigned long long)arg1;	// IMP=0x000000000008bebb
- (id)parsedResponseFromResponse:(id)arg1 requestType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000008bb56
- (id)initWithProtocol:(unsigned long long)arg1;	// IMP=0x000000000008baf1
- (id)init;	// IMP=0x000000000008ba82

@end

