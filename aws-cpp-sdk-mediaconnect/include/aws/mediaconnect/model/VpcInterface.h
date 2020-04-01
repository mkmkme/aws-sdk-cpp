﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConnect
{
namespace Model
{

  /**
   * The settings for a VPC Source.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/VpcInterface">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API VpcInterface
  {
  public:
    VpcInterface();
    VpcInterface(Aws::Utils::Json::JsonView jsonValue);
    VpcInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Immutable and has to be a unique against other VpcInterfaces in this Flow
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Immutable and has to be a unique against other VpcInterfaces in this Flow
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * Immutable and has to be a unique against other VpcInterfaces in this Flow
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * Immutable and has to be a unique against other VpcInterfaces in this Flow
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * Immutable and has to be a unique against other VpcInterfaces in this Flow
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * Immutable and has to be a unique against other VpcInterfaces in this Flow
     */
    inline VpcInterface& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Immutable and has to be a unique against other VpcInterfaces in this Flow
     */
    inline VpcInterface& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Immutable and has to be a unique against other VpcInterfaces in this Flow
     */
    inline VpcInterface& WithName(const char* value) { SetName(value); return *this;}


    /**
     * IDs of the network interfaces created in customer's account by MediaConnect.
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const{ return m_networkInterfaceIds; }

    /**
     * IDs of the network interfaces created in customer's account by MediaConnect.
     */
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }

    /**
     * IDs of the network interfaces created in customer's account by MediaConnect.
     */
    inline void SetNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = value; }

    /**
     * IDs of the network interfaces created in customer's account by MediaConnect.
     */
    inline void SetNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::move(value); }

    /**
     * IDs of the network interfaces created in customer's account by MediaConnect.
     */
    inline VpcInterface& WithNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetNetworkInterfaceIds(value); return *this;}

    /**
     * IDs of the network interfaces created in customer's account by MediaConnect.
     */
    inline VpcInterface& WithNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetNetworkInterfaceIds(std::move(value)); return *this;}

    /**
     * IDs of the network interfaces created in customer's account by MediaConnect.
     */
    inline VpcInterface& AddNetworkInterfaceIds(const Aws::String& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }

    /**
     * IDs of the network interfaces created in customer's account by MediaConnect.
     */
    inline VpcInterface& AddNetworkInterfaceIds(Aws::String&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(std::move(value)); return *this; }

    /**
     * IDs of the network interfaces created in customer's account by MediaConnect.
     */
    inline VpcInterface& AddNetworkInterfaceIds(const char* value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }


    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline VpcInterface& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline VpcInterface& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline VpcInterface& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * Security Group IDs to be used on ENI.
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * Security Group IDs to be used on ENI.
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * Security Group IDs to be used on ENI.
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * Security Group IDs to be used on ENI.
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * Security Group IDs to be used on ENI.
     */
    inline VpcInterface& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * Security Group IDs to be used on ENI.
     */
    inline VpcInterface& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * Security Group IDs to be used on ENI.
     */
    inline VpcInterface& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * Security Group IDs to be used on ENI.
     */
    inline VpcInterface& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * Security Group IDs to be used on ENI.
     */
    inline VpcInterface& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * Subnet must be in the AZ of the Flow
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * Subnet must be in the AZ of the Flow
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * Subnet must be in the AZ of the Flow
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * Subnet must be in the AZ of the Flow
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * Subnet must be in the AZ of the Flow
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * Subnet must be in the AZ of the Flow
     */
    inline VpcInterface& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * Subnet must be in the AZ of the Flow
     */
    inline VpcInterface& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * Subnet must be in the AZ of the Flow
     */
    inline VpcInterface& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_networkInterfaceIds;
    bool m_networkInterfaceIdsHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
