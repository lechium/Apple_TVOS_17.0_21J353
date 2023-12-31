//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SagaCollaborationRespondToPendingCollaboratorOperation
{
    long long _persistentID;	// 8 = 0x8
    NSString *_socialProfileID;	// 16 = 0x10
    _Bool _approval;	// 24 = 0x18
    _Bool _libraryUpdateRequired;	// 25 = 0x19
    unsigned long long _playlistCloudLibraryID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000003ff2e
- (void).cxx_destruct;	// IMP=0x002000000003fcff
@property(readonly, nonatomic) _Bool libraryUpdateRequired; // @synthesize libraryUpdateRequired=_libraryUpdateRequired;
@property(readonly, nonatomic) unsigned long long playlistCloudLibraryID; // @synthesize playlistCloudLibraryID=_playlistCloudLibraryID;
- (void)start;	// IMP=0x001000000003f9bf
- (_Bool)isPersistent;	// IMP=0x001000000003f9b7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000003f8f7
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003f825
- (id)description;	// IMP=0x001000000003f7b2
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 persistentID:(long long)arg3 socialProfileID:(id)arg4 approval:(_Bool)arg5;	// IMP=0x001000000003f70e

@end

