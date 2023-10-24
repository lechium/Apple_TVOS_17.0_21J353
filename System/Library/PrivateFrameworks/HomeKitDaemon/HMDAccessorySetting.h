//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessorySettingModel, HMFMessageDispatcher, NSArray, NSMutableArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessorySetting : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_inMemoryCachedConstraintRemovals;	// 16 = 0x10
    NSMutableArray *_inMemoryCachedConstraints;	// 24 = 0x18
    NSMutableArray *_constraints;	// 32 = 0x20
    id _value;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    long long _type;	// 56 = 0x38
    _Bool _reflected;	// 64 = 0x40
    unsigned long long _configurationVersion;	// 72 = 0x48
    NSUUID *_parentIdentifier;	// 80 = 0x50
    NSString *_keyPath;	// 88 = 0x58
    NSUUID *_identifier;	// 96 = 0x60
    unsigned long long _properties;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_clientQueue;	// 112 = 0x70
    HMFMessageDispatcher *_messageDispatcher;	// 120 = 0x78
    HMDAccessorySettingModel *_model;	// 128 = 0x80
    NSArray *_models;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000c14a05
+ (id)supportedConstraintClasses;	// IMP=0x0010000000c149d5
+ (id)supportedValueClasses;	// IMP=0x0010000000c149a5
+ (id)logCategory;	// IMP=0x0010000000c14975
+ (id)decodedValue:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000c148e1
- (void).cxx_destruct;	// IMP=0x0000000000c13acc
@property(readonly, copy) NSArray *models; // @synthesize models=_models;
@property(readonly) HMDAccessorySettingModel *model; // @synthesize model=_model;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(getter=isReflected) _Bool reflected; // @synthesize reflected=_reflected;
@property(readonly) unsigned long long properties; // @synthesize properties=_properties;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c1354d
- (id)constraintsForCodingXPC;	// IMP=0x0000000000c133ad
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c130ff
- (id)_modelsForMergeStrategyConstraintsUpdate:(id)arg1;	// IMP=0x0000000000c1297f
- (id)logIdentifier;	// IMP=0x0000000000c128c5
@property(nonatomic) unsigned long long configurationVersion; // @synthesize configurationVersion=_configurationVersion;
- (_Bool)shouldTurnOffPersonalRequestsOnLanguageChangeTo:(id)arg1 supportedMultiUserLanguageCodes:(id)arg2 isMultiUserEnabled:(_Bool)arg3;	// IMP=0x0000000000c12322
- (_Bool)shouldBlockSettingUpdateFromVersion:(id)arg1 isMultiUserEnabled:(_Bool)arg2;	// IMP=0x0000000000c12184
- (void)setValue:(id)arg1;	// IMP=0x0000000000c120f9
@property(readonly, copy) id value;
- (id)modelsForConstraintsUpdate:(id)arg1;	// IMP=0x0000000000c119b7
@property(readonly) _Bool isCollectionType;
- (_Bool)isConstraintMergeStrategyReflection;	// IMP=0x0000000000c11952
- (void)_mergeConstraintsLocallyWithAdditions:(id)arg1 removals:(id)arg2;	// IMP=0x0000000000c11724
- (void)removeConstraintsInMemory:(id)arg1;	// IMP=0x0000000000c11395
- (void)addConstraintsInMemory:(id)arg1;	// IMP=0x0000000000c11177
- (void)removeConstraint:(id)arg1;	// IMP=0x0000000000c1104c
- (void)addConstraint:(id)arg1;	// IMP=0x0000000000c10f7b
- (void)mergeConstraintsFromOther:(id)arg1;	// IMP=0x0000000000c10d21
- (id)replicatedMissingConstraintsFrom:(id)arg1;	// IMP=0x0000000000c10bac
- (void)setConstraints:(id)arg1;	// IMP=0x0000000000c10b29
- (id)inMemoryConstraintWithIdentifier:(id)arg1;	// IMP=0x0000000000c108f8
- (id)constraintWithIdentifier:(id)arg1;	// IMP=0x0000000000c106c7
- (id)counterpartConstraintFor:(id)arg1;	// IMP=0x0000000000c1037d
@property(readonly, copy) NSArray *constraints;
- (_Bool)canRemoveConstraint:(id)arg1;	// IMP=0x0000000000c101e1
- (_Bool)canAddConstraint:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000c0ffa4
- (_Bool)isValid:(id *)arg1;	// IMP=0x0000000000c0f042
@property(readonly) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void)_setType:(long long)arg1;	// IMP=0x0000000000c0efcd
@property(readonly) long long type;
@property(readonly, copy) NSString *name;
- (void)setGroup:(id)arg1;	// IMP=0x0000000000c0ee9b
- (id)copyReplica;	// IMP=0x0000000000c0ed49
- (id)copyIdentical;	// IMP=0x0000000000c0ec19
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c0ec07
- (_Bool)compareConstraints:(id)arg1;	// IMP=0x0000000000c0eaa5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c0e9ca
@property(readonly) unsigned long long hash;
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000c0e79c
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;	// IMP=0x0000000000c0e578
- (id)initWithModel:(id)arg1;	// IMP=0x0000000000c0e271
- (id)init;	// IMP=0x0000000000c0e1c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

