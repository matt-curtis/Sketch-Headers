//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStyledLayer.h"

@class MSArray, NSObject<NSCopying><NSCoding>;

@interface _MSLayerGroup : MSStyledLayer
{
    BOOL _hasClickThrough;
    MSArray *_layers;
    struct NSObject *_sharedObjectID;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)setPrimitiveSharedObjectID:(struct NSObject *)arg1;
- (struct NSObject *)primitiveSharedObjectID;
- (void)setPrimitiveLayers:(id)arg1;
- (id)primitiveLayers;
- (void)setPrimitiveHasClickThrough:(BOOL)arg1;
- (BOOL)primitiveHasClickThrough;
@property(retain, nonatomic) NSObject<NSCopying><NSCoding> *sharedObjectID; // @synthesize sharedObjectID=_sharedObjectID;
@property(retain, nonatomic) MSArray *layers; // @synthesize layers=_layers;
- (id)layersGeneric;
@property(nonatomic) BOOL hasClickThrough; // @synthesize hasClickThrough=_hasClickThrough;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

