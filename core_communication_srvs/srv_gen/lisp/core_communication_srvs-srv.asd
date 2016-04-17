
(cl:in-package :asdf)

(defsystem "core_communication_srvs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :core_communication_msgs-msg
               :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "GripperInfo" :depends-on ("_package_GripperInfo"))
    (:file "_package_GripperInfo" :depends-on ("_package"))
    (:file "ControlLoop" :depends-on ("_package_ControlLoop"))
    (:file "_package_ControlLoop" :depends-on ("_package"))
    (:file "BeckhoffDevices" :depends-on ("_package_BeckhoffDevices"))
    (:file "_package_BeckhoffDevices" :depends-on ("_package"))
    (:file "BasicRobotInfos" :depends-on ("_package_BasicRobotInfos"))
    (:file "_package_BasicRobotInfos" :depends-on ("_package"))
    (:file "ConnectionEnableStatus" :depends-on ("_package_ConnectionEnableStatus"))
    (:file "_package_ConnectionEnableStatus" :depends-on ("_package"))
    (:file "Parameter" :depends-on ("_package_Parameter"))
    (:file "_package_Parameter" :depends-on ("_package"))
    (:file "BasicTrajInfos" :depends-on ("_package_BasicTrajInfos"))
    (:file "_package_BasicTrajInfos" :depends-on ("_package"))
    (:file "ActiveProcessAsstring" :depends-on ("_package_ActiveProcessAsstring"))
    (:file "_package_ActiveProcessAsstring" :depends-on ("_package"))
    (:file "TrajectoryDuration" :depends-on ("_package_TrajectoryDuration"))
    (:file "_package_TrajectoryDuration" :depends-on ("_package"))
    (:file "IODevices" :depends-on ("_package_IODevices"))
    (:file "_package_IODevices" :depends-on ("_package"))
    (:file "JointConstraints" :depends-on ("_package_JointConstraints"))
    (:file "_package_JointConstraints" :depends-on ("_package"))
    (:file "PickUpPose" :depends-on ("_package_PickUpPose"))
    (:file "_package_PickUpPose" :depends-on ("_package"))
  ))